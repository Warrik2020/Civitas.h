#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyPeople : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyPeople(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyPeople") {}
    public:
        int people() const { return ReadField<int>("people"); }
        void people(int value) const { WriteField<int>("people", value); }
        float share() const { return ReadField<float>("share"); }
        void share(float value) const { WriteField<float>("share", value); }
        float grievance() const { return ReadField<float>("grievance"); }
        void grievance(float value) const { WriteField<float>("grievance", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void acceptance(float value) const { WriteField<float>("acceptance", value); }
        int standing() const { return ReadField<int>("standing"); }
        void standing(int value) const { WriteField<int>("standing", value); }
        bool accepted() const { return ReadField<bool>("accepted"); }
        void accepted(bool value) const { WriteField<bool>("accepted", value); }
        bool kindred() const { return ReadField<bool>("kindred"); }
        void kindred(bool value) const { WriteField<bool>("kindred", value); }
        bool otherFaith() const { return ReadField<bool>("otherFaith"); }
        void otherFaith(bool value) const { WriteField<bool>("otherFaith", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void homeland(int value) const { WriteField<int>("homeland", value); }
        bool homelandNear() const { return ReadField<bool>("homelandNear"); }
        void homelandNear(bool value) const { WriteField<bool>("homelandNear", value); }
        int theirStates() const { return ReadField<int>("theirStates"); }
        void theirStates(int value) const { WriteField<int>("theirStates", value); }
        bool homeRule() const { return ReadField<bool>("homeRule"); }
        void homeRule(bool value) const { WriteField<bool>("homeRule", value); }
        bool busy() const { return ReadField<bool>("busy"); }
        void busy(bool value) const { WriteField<bool>("busy", value); }
    };
}
