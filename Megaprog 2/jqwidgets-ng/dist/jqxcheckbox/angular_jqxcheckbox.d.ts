/// <reference path="../jqwidgets.d.ts" />
import { EventEmitter, ElementRef, OnChanges, SimpleChanges } from '@angular/core';
import { ControlValueAccessor } from '@angular/forms';
export declare class jqxCheckBoxComponent implements ControlValueAccessor, OnChanges {
    attrAnimationShowDelay: number;
    attrAnimationHideDelay: number;
    attrBoxSize: number | string;
    attrChecked: boolean | null;
    attrDisabled: boolean;
    attrEnableContainerClick: boolean;
    attrGroupName: string;
    attrHasThreeStates: boolean;
    attrLocked: boolean;
    attrRtl: boolean;
    attrTheme: string;
    attrWidth: string | number;
    attrHeight: string | number;
    autoCreate: boolean;
    properties: string[];
    host: any;
    elementRef: ElementRef;
    widgetObject: jqwidgets.jqxCheckBox;
    private onTouchedCallback;
    private onChangeCallback;
    constructor(containerElement: ElementRef);
    ngOnInit(): void;
    ngOnChanges(changes: SimpleChanges): boolean;
    arraysEqual(attrValue: any, hostValue: any): boolean;
    manageAttributes(): any;
    moveClasses(parentEl: HTMLElement, childEl: HTMLElement): void;
    moveStyles(parentEl: HTMLElement, childEl: HTMLElement): void;
    createComponent(options?: any): void;
    createWidget(options?: any): void;
    __updateRect__(): void;
    writeValue(value: any): void;
    registerOnChange(fn: any): void;
    registerOnTouched(fn: any): void;
    setOptions(options: any): void;
    animationShowDelay(arg?: number): number;
    animationHideDelay(arg?: number): number;
    boxSize(arg?: number | string): number | string;
    checked(arg?: boolean | null): boolean | null;
    disabled(arg?: boolean): boolean;
    enableContainerClick(arg?: boolean): boolean;
    groupName(arg?: string): string;
    height(arg?: number | string): number | string;
    hasThreeStates(arg?: boolean): boolean;
    locked(arg?: boolean): boolean;
    rtl(arg?: boolean): boolean;
    theme(arg?: string): string;
    width(arg?: number | string): number | string;
    check(): void;
    disable(): void;
    destroy(): void;
    enable(): void;
    focus(): void;
    indeterminate(): void;
    render(): void;
    toggle(): void;
    uncheck(): void;
    val(value?: boolean): any;
    onChecked: EventEmitter<{}>;
    onChange: EventEmitter<{}>;
    onIndeterminate: EventEmitter<{}>;
    onUnchecked: EventEmitter<{}>;
    __wireEvents__(): void;
}
