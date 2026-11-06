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
        void Focus(int axis, int groupId) const { void* args[] = { &axis, &groupId }; Call("Focus", args, 2); }
        void Refresh(void* c) const { void* args[] = { &c }; Call("Refresh", args, 1); }
        void* Root() const { return ReadField<void*>("Root"); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* swatch() const { return ReadField<void*>("swatch"); }
        void SetSwatch(void* value) const { WriteField<void*>("swatch", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* info() const { return ReadField<void*>("info"); }
        void SetInfo(void* value) const { WriteField<void*>("info", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        bool lit() const { return ReadField<bool>("lit"); }
        void SetLit(bool value) const { WriteField<bool>("lit", value); }
    };
}
