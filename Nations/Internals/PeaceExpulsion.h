#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceExpulsion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceExpulsion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceExpulsion") {}
    public:
        int groupId() const { return ReadField<int>("groupId"); }
        void groupId(int value) const { WriteField<int>("groupId", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
