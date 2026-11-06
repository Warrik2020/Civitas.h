#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerCommandV2 : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerCommandV2(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerCommandV2") {}
    public:
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* generals() const { return ReadField<void*>("generals"); }
        void SetGenerals(void* value) const { WriteField<void*>("generals", value); }
        void* armies() const { return ReadField<void*>("armies"); }
        void SetArmies(void* value) const { WriteField<void*>("armies", value); }
        void* groups() const { return ReadField<void*>("groups"); }
        void SetGroups(void* value) const { WriteField<void*>("groups", value); }
        int nextArmyId() const { return ReadField<int>("nextArmyId"); }
        void SetNextArmyId(int value) const { WriteField<int>("nextArmyId", value); }
        int nextGroupId() const { return ReadField<int>("nextGroupId"); }
        void SetNextGroupId(int value) const { WriteField<int>("nextGroupId", value); }
        int nextGeneralId() const { return ReadField<int>("nextGeneralId"); }
        void SetNextGeneralId(int value) const { WriteField<int>("nextGeneralId", value); }
        int nextSpearheadId() const { return ReadField<int>("nextSpearheadId"); }
        void SetNextSpearheadId(int value) const { WriteField<int>("nextSpearheadId", value); }
    };
}
