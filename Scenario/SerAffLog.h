#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAffLog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAffLog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAffLog") {}
    public:
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
        int severity() const { return ReadField<int>("severity"); }
        void severity(int value) const { WriteField<int>("severity", value); }
        int option() const { return ReadField<int>("option"); }
        void option(int value) const { WriteField<int>("option", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void stepId(void* value) const { WriteField<void*>("stepId", value); }
        void* headline() const { return ReadField<void*>("headline"); }
        void headline(void* value) const { WriteField<void*>("headline", value); }
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        void* optionLabel() const { return ReadField<void*>("optionLabel"); }
        void optionLabel(void* value) const { WriteField<void*>("optionLabel", value); }
    };
}
