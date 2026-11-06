#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerPlan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerPlan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerPlan") {}
    public:
        bool hasFront() const { return ReadField<bool>("hasFront"); }
        void hasFront(bool value) const { WriteField<bool>("hasFront", value); }
        void* foes() const { return ReadField<void*>("foes"); }
        void foes(void* value) const { WriteField<void*>("foes", value); }
        bool wholeBorder() const { return ReadField<bool>("wholeBorder"); }
        void wholeBorder(bool value) const { WriteField<bool>("wholeBorder", value); }
        void* section() const { return ReadField<void*>("section"); }
        void section(void* value) const { WriteField<void*>("section", value); }
        bool hasRegion() const { return ReadField<bool>("hasRegion"); }
        void hasRegion(bool value) const { WriteField<bool>("hasRegion", value); }
        void* region() const { return ReadField<void*>("region"); }
        void region(void* value) const { WriteField<void*>("region", value); }
        void* area() const { return ReadField<void*>("area"); }
        void area(void* value) const { WriteField<void*>("area", value); }
        int seamLo() const { return ReadField<int>("seamLo"); }
        void seamLo(int value) const { WriteField<int>("seamLo", value); }
        int seamHi() const { return ReadField<int>("seamHi"); }
        void seamHi(int value) const { WriteField<int>("seamHi", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void fallback(void* value) const { WriteField<void*>("fallback", value); }
        int fallbackSide() const { return ReadField<int>("fallbackSide"); }
        void fallbackSide(int value) const { WriteField<int>("fallbackSide", value); }
        bool fallbackActive() const { return ReadField<bool>("fallbackActive"); }
        void fallbackActive(bool value) const { WriteField<bool>("fallbackActive", value); }
        void* offensive() const { return ReadField<void*>("offensive"); }
        void offensive(void* value) const { WriteField<void*>("offensive", value); }
        void* spearheads() const { return ReadField<void*>("spearheads"); }
        void spearheads(void* value) const { WriteField<void*>("spearheads", value); }
    };
}
