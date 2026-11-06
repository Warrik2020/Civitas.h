#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerFront : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerFront(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerFront") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* targets() const { return ReadField<void*>("targets"); }
        void SetTargets(void* value) const { WriteField<void*>("targets", value); }
        int push() const { return ReadField<int>("push"); }
        void SetPush(int value) const { WriteField<int>("push", value); }
        int armyId() const { return ReadField<int>("armyId"); }
        void SetArmyId(int value) const { WriteField<int>("armyId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void SetDivisions(void* value) const { WriteField<void*>("divisions", value); }
        void* objective() const { return ReadField<void*>("objective"); }
        void SetObjective(void* value) const { WriteField<void*>("objective", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void SetFallback(void* value) const { WriteField<void*>("fallback", value); }
        int fallbackSide() const { return ReadField<int>("fallbackSide"); }
        void SetFallbackSide(int value) const { WriteField<int>("fallbackSide", value); }
        void* section() const { return ReadField<void*>("section"); }
        void SetSection(void* value) const { WriteField<void*>("section", value); }
    };
}
