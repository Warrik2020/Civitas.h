#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class LadderRow : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LadderRow(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "LadderRow") {}
    public:
        int link() const { return ReadField<int>("link"); }
        void SetLink(int value) const { WriteField<int>("link", value); }
        int status() const { return ReadField<int>("status"); }
        void SetStatus(int value) const { WriteField<int>("status", value); }
        void* headline() const { return ReadField<void*>("headline"); }
        void SetHeadline(void* value) const { WriteField<void*>("headline", value); }
        void* detail() const { return ReadField<void*>("detail"); }
        void SetDetail(void* value) const { WriteField<void*>("detail", value); }
        void* nextStep() const { return ReadField<void*>("nextStep"); }
        void SetNextStep(void* value) const { WriteField<void*>("nextStep", value); }
    };
}
