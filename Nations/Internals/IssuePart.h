#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class IssuePart : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IssuePart(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "IssuePart") {}
    public:
        int designId() const { return ReadField<int>("designId"); }
        void designId(int value) const { WriteField<int>("designId", value); }
        float units() const { return ReadField<float>("units"); }
        void units(float value) const { WriteField<float>("units", value); }
    };
}
