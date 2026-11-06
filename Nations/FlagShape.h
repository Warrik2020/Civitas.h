#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagShape : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagShape(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagShape") {}
    public:
        float WidthFor(float height) const { void* __callArgs[] = { &height }; return CallStaticValue<float>("WidthFor", __callArgs, 1); }
        float HeightFor(float width) const { void* __callArgs[] = { &width }; return CallStaticValue<float>("HeightFor", __callArgs, 1); }
        void* Canvas(int multiple) const { void* __callArgs[] = { &multiple }; return CallStatic("Canvas", __callArgs, 1); }
        int NativeWidth() const { return ReadStaticField<int>("NativeWidth"); }
        int NativeHeight() const { return ReadStaticField<int>("NativeHeight"); }
        float Ratio() const { return ReadStaticField<float>("Ratio"); }
    };
}
