#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiConnectorLines : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiConnectorLines(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiConnectorLines") {}
    public:
        void SetEdges(void* edges) const { void* args[] = { edges }; Call("SetEdges", args, 1); }
        void* fromBottom() const { return ReadField<void*>("fromBottom"); }
        void SetFromBottom(void* value) const { WriteField<void*>("fromBottom", value); }
        void* toTop() const { return ReadField<void*>("toTop"); }
        void SetToTop(void* value) const { WriteField<void*>("toTop", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
    };
}
