#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class SurveyChunkProofs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SurveyChunkProofs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "SurveyChunkProofs") {}
    public:
        bool NoneWaiting(void* grid, void* cell, int chunk) const { void* __callArgs[] = { grid, cell, &chunk }; return CallStaticValue<bool>("NoneWaiting", __callArgs, 3); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
