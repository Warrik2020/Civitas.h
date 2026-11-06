#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceLandRequest : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceLandRequest(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceLandRequest") {}
    public:
        void AddTaker(int nationId, float share) const { void* args[] = { &nationId, &share }; Call("AddTaker", args, 2); }
        int loserId() const { return ReadField<int>("loserId"); }
        void SetLoserId(int value) const { WriteField<int>("loserId", value); }
        void* takers() const { return ReadField<void*>("takers"); }
        void* shares() const { return ReadField<void*>("shares"); }
        float landFraction() const { return ReadField<float>("landFraction"); }
        void SetLandFraction(float value) const { WriteField<float>("landFraction", value); }
        float peopleReach() const { return ReadField<float>("peopleReach"); }
        void SetPeopleReach(float value) const { WriteField<float>("peopleReach", value); }
        bool foundStates() const { return ReadField<bool>("foundStates"); }
        void SetFoundStates(bool value) const { WriteField<bool>("foundStates", value); }
        bool kinJoins() const { return ReadField<bool>("kinJoins"); }
        void SetKinJoins(bool value) const { WriteField<bool>("kinJoins", value); }
        void* skip() const { return ReadField<void*>("skip"); }
        void SetSkip(void* value) const { WriteField<void*>("skip", value); }
    };
}
