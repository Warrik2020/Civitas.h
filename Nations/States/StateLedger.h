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
        void Apportion(void* it, void* cfg, void* states, void* remainder, int index, void* f) const { void* args[] = { it, cfg, states, &remainder, &index, &f }; CallStatic("Apportion", args, 6); }
        float NationTaxBase(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("NationTaxBase", args, 2); }
        void Invalidate() const { CallStatic("Invalidate", nullptr, 0); }
        bool TryGet(int stateId, void* figures) const { void* args[] = { &stateId, &figures }; return CallStaticValue<bool>("TryGet", args, 2); }
        bool TryGetRemainder(int nationId, void* figures) const { void* args[] = { &nationId, &figures }; return CallStaticValue<bool>("TryGetRemainder", args, 2); }
        bool BuildKeys(int nationId, void* dst, void* remainder) const { void* args[] = { &nationId, dst, &remainder }; return CallStaticValue<bool>("BuildKeys", args, 3); }
        int Remainder() const { return ReadStaticField<int>("Remainder"); }
        int front() const { return ReadField<int>("front"); }
        void SetFront(int value) const { WriteField<int>("front", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        int value() const { return ReadField<int>("value"); }
        void SetValue(int value) const { WriteField<int>("value", value); }
    };
}
