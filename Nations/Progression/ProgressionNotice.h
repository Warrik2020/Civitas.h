#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class ProgressionNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProgressionNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "ProgressionNotice") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        int kind() const { return ReadField<int>("kind"); }
        void* title() const { return ReadField<void*>("title"); }
        void* terms() const { return ReadField<void*>("terms"); }
        int tile() const { return ReadField<int>("tile"); }
        bool good() const { return ReadField<bool>("good"); }
    };
}
