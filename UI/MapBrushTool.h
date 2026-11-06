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
        int NextRadius(int radius, int dir) const { void* args[] = { &radius, &dir }; return CallStaticValue<int>("NextRadius", args, 2); }
        void TipSizeButtons(void* smaller, void* bigger) const { void* args[] = { smaller, bigger }; CallStatic("TipSizeButtons", args, 2); }
        void BeginLine(void* previewColor, void* onComplete, void* project = nullptr, float previewWidthTiles = -1f) const { void* args[] = { previewColor, onComplete, project, &previewWidthTiles }; Call("BeginLine", args, 4); }
        void BeginStamp(void* previewColor, float radiusTiles, void* onStamp, void* onStrokeEnd = nullptr, void* highlightFilter = nullptr, void* onRightClick = nullptr, void* onStampClick = nullptr, void* onStrokeBegin = nullptr, void* onResize = nullptr) const { void* args[] = { previewColor, &radiusTiles, onStamp, onStrokeEnd, highlightFilter, onRightClick, onStampClick, onStrokeBegin, onResize }; Call("BeginStamp", args, 9); }
        void ClaimFor(void* owner) const { void* args[] = { owner }; Call("ClaimFor", args, 1); }
        void EnableFill(void* area, void* beforeFill = nullptr, void* undo = nullptr) const { void* args[] = { area, beforeFill, undo }; Call("EnableFill", args, 3); }
        void SetFill(bool on) const { void* args[] = { &on }; Call("SetFill", args, 1); }
        void SetStampRadius(float radiusTiles) const { void* args[] = { &radiusTiles }; Call("SetStampRadius", args, 1); }
        void SetStampColors(void* ring, void* highlight) const { void* args[] = { ring, highlight }; Call("SetStampColors", args, 2); }
        void Cancel() const { Call("Cancel", nullptr, 0); }
        int MinRadius() const { return ReadStaticField<int>("MinRadius"); }
        int MaxRadius() const { return ReadStaticField<int>("MaxRadius"); }
    };
}
