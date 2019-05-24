# CppGenericsExample
This example shows how to generate multiple generic interface implementations using C++/CLI template. There is the `IGeneric<T>` interface. C++/CLI template is used to generate specific implementations of this interface for `UInt64`, `UInt32`, `UInt16` and `Byte` types. All implementations share single base template `ClassTemplate` logic.

The problem with current approach is that it works only for Windows while support for C++/CLI is not crossplatform.

It is possible to achieve the same result using [C#, T4 text template and .NET Core 2.2](https://github.com/Konard/T4GenericsExample).

## Prerequisites
* [Visual Studio 2019 Community Edition](https://visualstudio.microsoft.com/vs/) (at least)
* [Microsoft .NET Framework 4.7.2](https://dotnet.microsoft.com/download/dotnet-framework/net472)

## Run
* Clone repository
* Open solution (`.sln` file) in Visual Studio
* Press `F5` to build and start program

## Development process videos
