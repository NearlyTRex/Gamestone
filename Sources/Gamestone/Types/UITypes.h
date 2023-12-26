// Title: UITypes

// Gamestone, Licensed under the LGPL
// Waterstone Productions
#ifndef UITYPES_H
#define UITYPES_H

// System includes
#include <Rocket/Controls.h>
#include <Rocket/Core.h>
#include <Rocket/Debugger.h>
#include <RenderInterfaceSFML.h>
#include <ShellFileInterface.h>
#include <SystemInterfaceSFML.h>

// Define: SetRocketRenderer
// Set rocket render interface
#define SetRocketRenderer Rocket::Core::SetRenderInterface

// Define: SetRocketShell
// Set rocket shell interface
#define SetRocketShell Rocket::Core::SetFileInterface

// Define: SetRocketSystem
// Set rocket system interface
#define SetRocketSystem Rocket::Core::SetSystemInterface

// Define: InitializeRocket
// Initialize rocket system
#define InitializeRocket Rocket::Core::Initialise

// Define: InitializeRocketDebugger
// Initiative rocket debugger system
#define InitializeRocketDebugger Rocket::Debugger::Initialise

// Define: CreateRocketContext
// Creates rocket context
#define CreateRocketContext Rocket::Core::CreateContext

// Define: LoadRocketFont
// Load rocket font
#define LoadRocketFont Rocket::Core::FontDatabase::LoadFontFace

// Define: RocketContext
// Rocket context object
#define RocketContext Rocket::Core::Context

// Define: RocketVector2i
// Rocket vector object
#define RocketVector2i Rocket::Core::Vector2i

#endif
