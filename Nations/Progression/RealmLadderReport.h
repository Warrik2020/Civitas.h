#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class RealmLadderReport : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RealmLadderReport(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "RealmLadderReport") {}
    public:
        void* rows() const { return ReadField<void*>("rows"); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int ceiling() const { return ReadField<int>("ceiling"); }
        void SetCeiling(int value) const { WriteField<int>("ceiling", value); }
        int limitedBy() const { return ReadField<int>("limitedBy"); }
        void SetLimitedBy(int value) const { WriteField<int>("limitedBy", value); }
        int firstBinding() const { return ReadField<int>("firstBinding"); }
        void SetFirstBinding(int value) const { WriteField<int>("firstBinding", value); }
    };
}
