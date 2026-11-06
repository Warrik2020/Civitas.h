#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class IrredentaDemand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IrredentaDemand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "IrredentaDemand") {}
    public:
        int claimantId() const { return ReadField<int>("claimantId"); }
        void claimantId(int value) const { WriteField<int>("claimantId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void targetId(int value) const { WriteField<int>("targetId", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void createdTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void deadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
