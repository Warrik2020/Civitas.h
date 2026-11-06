#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerRoad : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerRoad(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerRoad") {}
    public:
        int builderNationId() const { return ReadField<int>("builderNationId"); }
        void builderNationId(int value) const { WriteField<int>("builderNationId", value); }
        void* pts() const { return ReadField<void*>("pts"); }
        void pts(void* value) const { WriteField<void*>("pts", value); }
        int level() const { return ReadField<int>("level"); }
        void level(int value) const { WriteField<int>("level", value); }
    };
}
