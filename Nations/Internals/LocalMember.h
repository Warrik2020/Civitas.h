#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalMember : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalMember(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalMember") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int role() const { return ReadField<int>("role"); }
        void role(int value) const { WriteField<int>("role", value); }
        int joinedTick() const { return ReadField<int>("joinedTick"); }
        void joinedTick(int value) const { WriteField<int>("joinedTick", value); }
        int leftTick() const { return ReadField<int>("leftTick"); }
        void leftTick(int value) const { WriteField<int>("leftTick", value); }
    };
}
