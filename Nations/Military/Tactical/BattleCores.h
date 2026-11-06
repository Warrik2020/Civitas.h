#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleCores : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleCores(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleCores") {}
    public:
        int Resolve(void* setup) const { void* __callArgs[] = { setup }; return CallStaticValue<int>("Resolve", __callArgs, 1); }
        int Default_() const { return ReadStaticField<int>("Default"); }
        void* Override() const { return ReadStaticField<void*>("Override"); }
        void Override(void* value) const { WriteStaticField<void*>("Override", value); }
    };
}
