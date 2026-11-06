#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Visuals
{
    class VisualEras : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VisualEras(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Visuals", "VisualEras") {}
    public:
        void* Name(int era) const { void* __callArgs[] = { &era }; return CallStatic("Name", __callArgs, 1); }
        int FirstYear(int era) const { void* __callArgs[] = { &era }; return CallStaticValue<int>("FirstYear", __callArgs, 1); }
        int OfYear(int year) const { void* __callArgs[] = { &year }; return CallStaticValue<int>("OfYear", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
