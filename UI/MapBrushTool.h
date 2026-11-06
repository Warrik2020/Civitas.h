#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapBrushTool : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapBrushTool(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapBrushTool") {}
    public:
        int NextRadius(int radius, int dir) const { void* __callArgs[] = { &radius, &dir }; return CallStaticValue<int>("NextRadius", __callArgs, 2); }
        void TipSizeButtons(void* smaller, void* bigger) const { void* __callArgs[] = { smaller, bigger }; CallStatic("TipSizeButtons", __callArgs, 2); }
        void BeginLine(void* previewColor, void* onComplete, void* project = nullptr, float previewWidthTiles = -1.0f) const { void* __callArgs[] = { previewColor, onComplete, project, &previewWidthTiles }; Call("BeginLine", __callArgs, 4); }
        void BeginStamp(void* previewColor, float radiusTiles, void* onStamp, void* onStrokeEnd = nullptr, void* highlightFilter = nullptr, void* onRightClick = nullptr, void* onStampClick = nullptr, void* onStrokeBegin = nullptr, void* onResize = nullptr) const { void* __callArgs[] = { previewColor, &radiusTiles, onStamp, onStrokeEnd, highlightFilter, onRightClick, onStampClick, onStrokeBegin, onResize }; Call("BeginStamp", __callArgs, 9); }
        void ClaimFor(void* owner) const { void* __callArgs[] = { owner }; Call("ClaimFor", __callArgs, 1); }
        void EnableFill(void* area, void* beforeFill = nullptr, void* undo = nullptr) const { void* __callArgs[] = { area, beforeFill, undo }; Call("EnableFill", __callArgs, 3); }
        void SetFill(bool on) const { void* __callArgs[] = { &on }; Call("SetFill", __callArgs, 1); }
        void SetStampRadius(float radiusTiles) const { void* __callArgs[] = { &radiusTiles }; Call("SetStampRadius", __callArgs, 1); }
        void SetStampColors(void* ring, void* highlight) const { void* __callArgs[] = { ring, highlight }; Call("SetStampColors", __callArgs, 2); }
        void Cancel() const { Call("Cancel", nullptr, 0); }
        int MinRadius() const { return ReadStaticField<int>("MinRadius"); }
        int MaxRadius() const { return ReadStaticField<int>("MaxRadius"); }
    };
}
