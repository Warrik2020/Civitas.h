#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpMember : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpMember(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpMember") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int role() const { return ReadField<int>("role"); }
        void SetRole(int value) const { WriteField<int>("role", value); }
        int joined() const { return ReadField<int>("joined"); }
        void SetJoined(int value) const { WriteField<int>("joined", value); }
        int left() const { return ReadField<int>("left"); }
        void SetLeft(int value) const { WriteField<int>("left", value); }
    };
}
