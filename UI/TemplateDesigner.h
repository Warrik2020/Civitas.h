#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class TemplateDesigner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TemplateDesigner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "TemplateDesigner") {}
    public:
        void OpenFor(int cls, int templateId = -1) const { void* __callArgs[] = { &cls, &templateId }; CallStatic("OpenFor", __callArgs, 2); }
        void Close() const { CallStatic("Close", nullptr, 0); }
    };
}
