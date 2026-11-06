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
        void AddTaker(int nationId, float share) const { void* __callArgs[] = { &nationId, &share }; Call("AddTaker", __callArgs, 2); }
        int loserId() const { return ReadField<int>("loserId"); }
        void loserId(int value) const { WriteField<int>("loserId", value); }
        void* takers() const { return ReadField<void*>("takers"); }
        void* shares() const { return ReadField<void*>("shares"); }
        float landFraction() const { return ReadField<float>("landFraction"); }
        void landFraction(float value) const { WriteField<float>("landFraction", value); }
        float peopleReach() const { return ReadField<float>("peopleReach"); }
        void peopleReach(float value) const { WriteField<float>("peopleReach", value); }
        bool foundStates() const { return ReadField<bool>("foundStates"); }
        void foundStates(bool value) const { WriteField<bool>("foundStates", value); }
        bool kinJoins() const { return ReadField<bool>("kinJoins"); }
        void kinJoins(bool value) const { WriteField<bool>("kinJoins", value); }
        void* skip() const { return ReadField<void*>("skip"); }
        void skip(void* value) const { WriteField<void*>("skip", value); }
    };
}
