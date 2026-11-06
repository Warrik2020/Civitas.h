#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class UiPolygonGraphic : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPolygonGraphic(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "UiPolygonGraphic") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void AddShape(void* pts, void* fill, void* outline, float outlineWidth, bool blendOnce = false) const { void* __callArgs[] = { pts, fill, outline, &outlineWidth, &blendOnce }; Call("AddShape", __callArgs, 5); }
        void AddLine(void* a, void* b, void* color, float width) const { void* __callArgs[] = { a, b, color, &width }; Call("AddLine", __callArgs, 4); }
        void AddHandle(void* pos, float size, void* color, bool hollow = false) const { void* __callArgs[] = { pos, &size, color, &hollow }; Call("AddHandle", __callArgs, 4); }
        void Commit() const { Call("Commit", nullptr, 0); }
    };
}
