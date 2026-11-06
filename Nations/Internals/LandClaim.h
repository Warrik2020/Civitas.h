#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LandClaim : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandClaim(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LandClaim") {}
    public:
        bool Matured(int now) const { void* args[] = { &now }; return CallValue<bool>("Matured", args, 1); }
        int claimantId() const { return ReadField<int>("claimantId"); }
        void SetClaimantId(int value) const { WriteField<int>("claimantId", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        int reason() const { return ReadField<int>("reason"); }
        void SetReason(int value) const { WriteField<int>("reason", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        int filedTick() const { return ReadField<int>("filedTick"); }
        void SetFiledTick(int value) const { WriteField<int>("filedTick", value); }
        int matureTick() const { return ReadField<int>("matureTick"); }
        void SetMatureTick(int value) const { WriteField<int>("matureTick", value); }
    };
}
