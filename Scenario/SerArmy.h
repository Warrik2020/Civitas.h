#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerArmy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerArmy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerArmy") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int frontId() const { return ReadField<int>("frontId"); }
        void frontId(int value) const { WriteField<int>("frontId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void divisions(void* value) const { WriteField<void*>("divisions", value); }
    };
}
