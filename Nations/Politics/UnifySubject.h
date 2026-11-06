#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifySubject : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifySubject(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifySubject") {}
    public:
        int people() const { return ReadField<int>("people"); }
        void people(int value) const { WriteField<int>("people", value); }
        int states() const { return ReadField<int>("states"); }
        void states(int value) const { WriteField<int>("states", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void tiles(int value) const { WriteField<int>("tiles", value); }
        float share() const { return ReadField<float>("share"); }
        void share(float value) const { WriteField<float>("share", value); }
        float grievance() const { return ReadField<float>("grievance"); }
        void grievance(float value) const { WriteField<float>("grievance", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void homeland(int value) const { WriteField<int>("homeland", value); }
        int mainState() const { return ReadField<int>("mainState"); }
        void mainState(int value) const { WriteField<int>("mainState", value); }
    };
}
