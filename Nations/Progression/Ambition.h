#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class Ambition : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Ambition(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "Ambition") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void id(void* value) const { WriteField<void*>("id", value); }
        int band() const { return ReadField<int>("band"); }
        void band(int value) const { WriteField<int>("band", value); }
        void* title() const { return ReadField<void*>("title"); }
        void title(void* value) const { WriteField<void*>("title", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void goal(void* value) const { WriteField<void*>("goal", value); }
        int reward() const { return ReadField<int>("reward"); }
        void reward(int value) const { WriteField<int>("reward", value); }
        bool resource() const { return ReadField<bool>("resource"); }
        void resource(bool value) const { WriteField<bool>("resource", value); }
    };
}
