#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateLedger") {}
    public:
        void Apportion(void* it, void* cfg, void* states, void* remainder, int index, void* f) const { void* __callArgs[] = { it, cfg, states, &remainder, &index, &f }; CallStatic("Apportion", __callArgs, 6); }
        float NationTaxBase(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("NationTaxBase", __callArgs, 2); }
        void Invalidate() const { CallStatic("Invalidate", nullptr, 0); }
        bool TryGet(int stateId, void* figures) const { void* __callArgs[] = { &stateId, &figures }; return CallStaticValue<bool>("TryGet", __callArgs, 2); }
        bool TryGetRemainder(int nationId, void* figures) const { void* __callArgs[] = { &nationId, &figures }; return CallStaticValue<bool>("TryGetRemainder", __callArgs, 2); }
        bool BuildKeys(int nationId, void* dst, void* remainder) const { void* __callArgs[] = { &nationId, dst, &remainder }; return CallStaticValue<bool>("BuildKeys", __callArgs, 3); }
        int Remainder() const { return ReadStaticField<int>("Remainder"); }
    };
}
