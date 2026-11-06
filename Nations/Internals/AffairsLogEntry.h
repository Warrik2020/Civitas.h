#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsLogEntry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsLogEntry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsLogEntry") {}
    public:
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void SetStepId(void* value) const { WriteField<void*>("stepId", value); }
        void* headline() const { return ReadField<void*>("headline"); }
        void SetHeadline(void* value) const { WriteField<void*>("headline", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        int severity() const { return ReadField<int>("severity"); }
        void SetSeverity(int value) const { WriteField<int>("severity", value); }
        int option() const { return ReadField<int>("option"); }
        void SetOption(int value) const { WriteField<int>("option", value); }
        void* optionLabel() const { return ReadField<void*>("optionLabel"); }
        void SetOptionLabel(void* value) const { WriteField<void*>("optionLabel", value); }
    };
}
