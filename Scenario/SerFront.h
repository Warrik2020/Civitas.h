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
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* targets() const { return ReadField<void*>("targets"); }
        void targets(void* value) const { WriteField<void*>("targets", value); }
        int push() const { return ReadField<int>("push"); }
        void push(int value) const { WriteField<int>("push", value); }
        int armyId() const { return ReadField<int>("armyId"); }
        void armyId(int value) const { WriteField<int>("armyId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void divisions(void* value) const { WriteField<void*>("divisions", value); }
        void* objective() const { return ReadField<void*>("objective"); }
        void objective(void* value) const { WriteField<void*>("objective", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void fallback(void* value) const { WriteField<void*>("fallback", value); }
        int fallbackSide() const { return ReadField<int>("fallbackSide"); }
        void fallbackSide(int value) const { WriteField<int>("fallbackSide", value); }
        void* section() const { return ReadField<void*>("section"); }
        void section(void* value) const { WriteField<void*>("section", value); }
    };
}
