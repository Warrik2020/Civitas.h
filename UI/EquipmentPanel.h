#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class EquipmentPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "EquipmentPanel") {}
    public:
        bool ToolDesign(int designId, const char*& refusal) const { void* __callArgs[] = { &designId, &refusal }; return CallValue<bool>("ToolDesign", __callArgs, 2); }
        void ShowLine(int designId) const { void* __callArgs[] = { &designId }; Call("ShowLine", __callArgs, 1); }
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void* ShowPool(void** args = nullptr, int count = 0) const { return Call("ShowPool", args, count); }
        void ShowPage(void* page) const { void* __callArgs[] = { page }; Call("ShowPage", __callArgs, 1); }
        void ShowNeediest(void* page) const { void* __callArgs[] = { page }; Call("ShowNeediest", __callArgs, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
    };
}
