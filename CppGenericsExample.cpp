#include "pch.h"
#include "UInt64Class.h"
#include "UInt32Class.h"
#include "UInt16Class.h"
#include "UInt8Class.h"

using namespace System;

void Print(Object^ object)
{
	Type^ type = object->GetType();

	Console::Write(type);
	Console::Write(" = ");
	Console::WriteLine(object);
}

int main(array<System::String ^> ^args)
{
	Print((gcnew UInt64Class())->ReturnResult());
	Print((gcnew UInt32Class())->ReturnResult());
	Print((gcnew UInt16Class())->ReturnResult());
	Print((gcnew UInt8Class())->ReturnResult());

    return 0;
}