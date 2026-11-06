#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "CivitasCore.h"

namespace CivitasPoly
{
    class GameBootIntent : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameBootIntent(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly", "GameBootIntent") {}
    public:
        int Mode() const { return ReadStaticField<int>("Mode"); }
        void Mode(int value) const { WriteStaticField<int>("Mode", value); }
        bool EditorRequested() const { return ReadStaticField<bool>("EditorRequested"); }
        void EditorRequested(bool value) const { WriteStaticField<bool>("EditorRequested", value); }
    };
}
