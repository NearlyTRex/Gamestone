/*
 * This source file is part of libRocket, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://www.librocket.com
 *
 * Copyright (c) 2008-2010 Nuno Silva
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#include <Rocket/Core/Core.h>
#include "RenderInterfaceSFML.h"
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

RocketSFMLRenderer::RocketSFMLRenderer()
{
}

void RocketSFMLRenderer::SetWindow(sf::RenderWindow* window)
{
  renderWindow = window;
};

sf::RenderWindow* RocketSFMLRenderer::GetWindow()
{
  return renderWindow;
};

void RocketSFMLRenderer::RenderGeometry(Rocket::Core::Vertex* vertices, int num_vertices, int* indices, int num_indices, const Rocket::Core::TextureHandle texture, const Rocket::Core::Vector2f& translation)
{
  renderWindow->setView(renderWindow->getDefaultView());
  sf::VertexArray vertexArray(sf::Triangles, num_indices);
  for (int j = 0; j < num_indices; j++)
  {
    int i = indices[j];
    vertexArray[j].position = sf::Vector2f(vertices[i].position.x, vertices[i].position.y);
    vertexArray[j].color = sf::Color(vertices[i].colour.red, vertices[i].colour.green, vertices[i].colour.blue, vertices[i].colour.alpha);
    if (texture)
    {
      vertexArray[j].texCoords = sf::Vector2f(vertices[i].tex_coord.x * ((sf::Texture*)texture)->getSize().x, vertices[i].tex_coord.y * ((sf::Texture*)texture)->getSize().y);
    }
  }
  sf::RenderStates states;
  states.blendMode = sf::BlendAlpha;
  states.texture = (sf::Texture*)texture;
  states.transform = sf::Transform::Identity;
  states.transform.translate(translation.x, translation.y);
  renderWindow->draw(vertexArray, states);
}

Rocket::Core::CompiledGeometryHandle RocketSFMLRenderer::CompileGeometry(Rocket::Core::Vertex* vertices, int num_vertices, int* indices, int num_indices, const Rocket::Core::TextureHandle texture)
{
  return NULL;
}

void RocketSFMLRenderer::RenderCompiledGeometry(Rocket::Core::CompiledGeometryHandle geometry, const Rocket::Core::Vector2f& translation)
{
  ROCKET_ASSERTMSG(false, "Not Implemented");
}

void RocketSFMLRenderer::ReleaseCompiledGeometry(Rocket::Core::CompiledGeometryHandle geometry)
{
  ROCKET_ASSERTMSG(false, "Not Implemented");
}

void RocketSFMLRenderer::EnableScissorRegion(bool enable)
{
  if (enable)
  {
    glEnable(GL_SCISSOR_TEST);
  }
  else
  {
    glDisable(GL_SCISSOR_TEST);
  }
}

void RocketSFMLRenderer::SetScissorRegion(int x, int y, int width, int height)
{
  glScissor(x, renderWindow->getSize().y - (y + height), width, height);
}

bool RocketSFMLRenderer::LoadTexture(Rocket::Core::TextureHandle& texture_handle, Rocket::Core::Vector2i& texture_dimensions, const Rocket::Core::String& source)
{
  Rocket::Core::FileInterface* file_interface = Rocket::Core::GetFileInterface();
  Rocket::Core::FileHandle file_handle = file_interface->Open(source);
  if (!file_handle)
  {
    return false;
  }
  file_interface->Seek(file_handle, 0, SEEK_END);
  size_t buffer_size = file_interface->Tell(file_handle);
  file_interface->Seek(file_handle, 0, SEEK_SET);
  char* buffer = new char[buffer_size];
  file_interface->Read(buffer, buffer_size, file_handle);
  file_interface->Close(file_handle);
  sf::Texture *tex = new sf::Texture();
  if (!tex->loadFromMemory(buffer, buffer_size))
  {
    delete buffer;
    delete tex;
    return false;
  };
  delete buffer;
  texture_handle = (Rocket::Core::TextureHandle)tex;
  texture_dimensions = Rocket::Core::Vector2i(tex->getSize().x, tex->getSize().y);
  return true;
}

bool RocketSFMLRenderer::GenerateTexture(Rocket::Core::TextureHandle& texture_handle, const Rocket::Core::byte* source, const Rocket::Core::Vector2i& source_dimensions)
{
  sf::Image img;
  img.create(source_dimensions.x, source_dimensions.y, source);
  sf::Texture* tex = new sf::Texture();
  if (!tex->loadFromImage(img))
  {
    delete tex;
    return false;
  };
  texture_handle = (Rocket::Core::TextureHandle)tex;
  return true;
}

void RocketSFMLRenderer::ReleaseTexture(Rocket::Core::TextureHandle texture_handle)
{
  delete (sf::Texture*)texture_handle;
}
