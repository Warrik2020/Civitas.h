#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesFamiliesPage : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesFamiliesPage(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesFamiliesPage") {}
    public:
        void Focus(int axis, int groupId) const { void* __callArgs[] = { &axis, &groupId }; Call("Focus", __callArgs, 2); }
        void Refresh(void* c) const { void* __callArgs[] = { &c }; Call("Refresh", __callArgs, 1); }
        void* Root() const { return ReadField<void*>("Root"); }
    };
}
