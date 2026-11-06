#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsChoiceDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsChoiceDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsChoiceDef") {}
    public:
        bool big() const { return ReadField<bool>("big"); }
        void SetBig(bool value) const { WriteField<bool>("big", value); }
        float deadlineDays() const { return ReadField<float>("deadlineDays"); }
        void SetDeadlineDays(float value) const { WriteField<float>("deadlineDays", value); }
        void* options() const { return ReadField<void*>("options"); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
