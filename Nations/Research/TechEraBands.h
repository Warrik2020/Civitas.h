#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechEraBands : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechEraBands(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechEraBands") {}
    public:
        int IndexOf(float tier) const { void* __callArgs[] = { &tier }; return CallStaticValue<int>("IndexOf", __callArgs, 1); }
        void* Years(int band) const { void* __callArgs[] = { &band }; return CallStatic("Years", __callArgs, 1); }
        void* Name(int band) const { void* __callArgs[] = { &band }; return CallStatic("Name", __callArgs, 1); }
        int Current() const { return CallStaticValue<int>("Current", nullptr, 0); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
