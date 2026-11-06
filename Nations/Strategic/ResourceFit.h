#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceFit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceFit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceFit") {}
    public:
        bool Fits(void* it, void* d) const { void* __callArgs[] = { it, d }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
        void* Config() const { return ReadStaticField<void*>("Config"); }
        void Config(void* value) const { WriteStaticField<void*>("Config", value); }
    };
}
