#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeopleRef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleRef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeopleRef") {}
    public:
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
    };
}
