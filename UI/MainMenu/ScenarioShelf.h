#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class ScenarioShelf : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioShelf(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "ScenarioShelf") {}
    public:
        void* Attach(void* parent, int kind, void* onPlay, void* onDelete, void* onArm = nullptr) const { void* args[] = { parent, &kind, onPlay, onDelete, onArm }; return CallStatic("Attach", args, 5); }
        void* Rebuild(void** args = nullptr, int count = 0) const { return Call("Rebuild", args, count); }
        float CardWidth() const { return ReadStaticField<float>("CardWidth"); }
        float CardHeight() const { return ReadStaticField<float>("CardHeight"); }
        int MaxCards() const { return ReadStaticField<int>("MaxCards"); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* shot() const { return ReadField<void*>("shot"); }
        void SetShot(void* value) const { WriteField<void*>("shot", value); }
        void* job() const { return ReadField<void*>("job"); }
        void SetJob(void* value) const { WriteField<void*>("job", value); }
    };
}
