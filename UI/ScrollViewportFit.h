#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ScrollViewportFit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScrollViewportFit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ScrollViewportFit") {}
    public:
        void Configure(void* content, float cap, bool followCanvas = true) const { void* args[] = { content, &cap, &followCanvas }; Call("Configure", args, 3); }
        void CalculateLayoutInputHorizontal() const { Call("CalculateLayoutInputHorizontal", nullptr, 0); }
        void CalculateLayoutInputVertical() const { Call("CalculateLayoutInputVertical", nullptr, 0); }
    };
}
