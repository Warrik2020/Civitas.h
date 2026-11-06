#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLandClaim : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLandClaim(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLandClaim") {}
    public:
        int claimant() const { return ReadField<int>("claimant"); }
        void claimant(int value) const { WriteField<int>("claimant", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        int reason() const { return ReadField<int>("reason"); }
        void reason(int value) const { WriteField<int>("reason", value); }
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        int filedTick() const { return ReadField<int>("filedTick"); }
        void filedTick(int value) const { WriteField<int>("filedTick", value); }
        int matureTick() const { return ReadField<int>("matureTick"); }
        void matureTick(int value) const { WriteField<int>("matureTick", value); }
    };
}
