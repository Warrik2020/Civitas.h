#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class WorksPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "WorksPanel") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int slots() const { return ReadField<int>("slots"); }
        void SetSlots(int value) const { WriteField<int>("slots", value); }
        int free() const { return ReadField<int>("free"); }
        void SetFree(int value) const { WriteField<int>("free", value); }
        float output() const { return ReadField<float>("output"); }
        void SetOutput(float value) const { WriteField<float>("output", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
    };
}
