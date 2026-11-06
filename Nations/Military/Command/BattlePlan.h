#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class BattlePlan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattlePlan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "BattlePlan") {}
    public:
        void* Clone() const { return Call("Clone", nullptr, 0); }
        void* front() const { return ReadField<void*>("front"); }
        void front(void* value) const { WriteField<void*>("front", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void fallback(void* value) const { WriteField<void*>("fallback", value); }
        int fallbackSide() const { return ReadField<int>("fallbackSide"); }
        void fallbackSide(int value) const { WriteField<int>("fallbackSide", value); }
        bool fallbackActive() const { return ReadField<bool>("fallbackActive"); }
        void fallbackActive(bool value) const { WriteField<bool>("fallbackActive", value); }
        void* offensive() const { return ReadField<void*>("offensive"); }
        void offensive(void* value) const { WriteField<void*>("offensive", value); }
        void* spearheads() const { return ReadField<void*>("spearheads"); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
    };
}
