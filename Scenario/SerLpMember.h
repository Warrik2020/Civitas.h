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
        void id(int value) const { WriteField<int>("id", value); }
        int role() const { return ReadField<int>("role"); }
        void role(int value) const { WriteField<int>("role", value); }
        int joined() const { return ReadField<int>("joined"); }
        void joined(int value) const { WriteField<int>("joined", value); }
        int left() const { return ReadField<int>("left"); }
        void left(int value) const { WriteField<int>("left", value); }
    };
}
