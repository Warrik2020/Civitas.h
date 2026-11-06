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
        void divisions(int value) const { WriteField<int>("divisions", value); }
        int ceiling() const { return ReadField<int>("ceiling"); }
        void ceiling(int value) const { WriteField<int>("ceiling", value); }
        int limitedBy() const { return ReadField<int>("limitedBy"); }
        void limitedBy(int value) const { WriteField<int>("limitedBy", value); }
        int firstBinding() const { return ReadField<int>("firstBinding"); }
        void firstBinding(int value) const { WriteField<int>("firstBinding", value); }
    };
}
