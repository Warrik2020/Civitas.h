#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class StateBaronies : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateBaronies(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "StateBaronies") {}
    public:
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        void* baronies() const { return ReadField<void*>("baronies"); }
        void baronies(void* value) const { WriteField<void*>("baronies", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        bool tallied() const { return ReadField<bool>("tallied"); }
        void tallied(bool value) const { WriteField<bool>("tallied", value); }
    };
}
